fetch('https://www.thecocktaildb.com/api/json/v1/1/search.php?s=a')
    .then(res=>res.json())
    .then(dataset=>{
        // console.log(dataset.drinks);
        DataSet(dataset.drinks);
    })
    .catch(err =>{
        console.log(err);
    });

const DataSet = (dataset)=>{
    dataset.forEach(data => {
        // console.log(data);
        AddItems(data);
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
    <button class="btn btn-primary" onclick="AddToCart('${data.strDrinkThumb}', '${data.strGlass}')">Add to Cart</button>
    <button class="btn btn-secondary">Details</button>
    `;
    menu.append(div);
};

let count = 0;
let ul = document.querySelector("ul");
const AddToCart = (image, Name)=>{
    count ++;
    let li = document.createElement("li");
    li.setAttribute("class","list-group-item d-flex justify-content-between");
    li.innerHTML = `
    <span>1</span>
    <img src="${image}" alt="" class="img-fluid">
    <span>Name</span>
    `;
    // ul.append(li);
    if(count <= 7){
        ul.append(li);
    }
};