fetch('https://www.thecocktaildb.com/api/json/v1/1/search.php?s=a')
    .then(res=>res.json())
    .then(dataset=>{
        DataSet(dataset.drinks);
    })
    .catch(err =>{
        console.log(err);
    });

const DataSet = (dataset)=>{
    dataset.forEach(data => {
        AddItems(data);
    });
};

let serBtn = document.querySelector("#ser-btn");
serBtn.addEventListener("click",()=>{
let inputText = document.querySelector("#input").value;
    fetch(`https://www.thecocktaildb.com/api/json/v1/1/search.php?s=${inputText}`)
        .then(res=>res.json())
        .then(info=>{
            if(info.drinks != null){
                AddSearchItem(info.drinks);
            }else{
                menu.innerHTML = "<p id='notFound'>Items not found!</p>";
            }
        })
        .catch(err =>{
            console.log(err);
        });        
});

const AddSearchItem = (data)=>{
    menu.innerHTML ="";
    data.forEach(item =>{
        AddItems(item);
    });
};

let menu = document.querySelector("#menu");
const AddItems = (data)=>{    
    let div = document.createElement("div");
    div.setAttribute("class","box col");
    div.innerHTML = `
    <img src="${data.strDrinkThumb}" alt="" class="img-fluid p-1">
    <h5>Name: ${data.strGlass}</h5>
    <p>Category: ${data.strCategory}</p>
    <p>Instructions: ${data.strInstructions.slice(0,15)}....</p>
    <button class="btn btn-primary btn1" onclick="AddToCart('${data.strDrinkThumb}', '${data.strGlass}', this)">Add to Cart</button>
    <button class="btn btn-secondary" onclick="showDetails('${data.strGlass}', '${data.strDrinkThumb}' ,'${data.strCategory}', '${data.strAlcoholic}' ,'${data.strInstructions}')">Details</button>
    `;
    menu.append(div);
};

const showDetails = (name, image, category, alcoholic, instructions) => {
    document.getElementById("modalTitle").innerText = name;
    document.getElementById("modalBody").innerHTML = `
        <img src="${image}" alt="${name}" class="img-fluid">
        <p><strong>Details</strong></p>
        <p>Category:<strong> ${category}</strong></p>
        <p>Alcoholic: <strong>${alcoholic}</strong></p>
        <p>${instructions}</p>
    `;
    const detailsModal = new bootstrap.Modal(document.getElementById("detailsModal"));
    detailsModal.show();
};

let count = 0;
let ul = document.querySelector("ul");
let totalItems = document.querySelector("#total");
const AddToCart = (image, Name, btn1)=>{
    count ++;
    let li = document.createElement("li");
    li.setAttribute("class","list-group-item d-flex justify-content-between");
    li.innerHTML = `
    <span>${count}</span>
    <img src="${image}" alt="" class="img-fluid">
    <span>${Name}</span>
    `;
    if(count <= 7){
        totalItems.innerText = `Total Cart: ${count}`;
        ul.append(li);
        btn1.innerText = "Already Selected";
        btn1.style.backgroundColor = "white";
        btn1.style.color = "red";
    }else{
        alert("Can't add more then 7 items!");
    }
};
