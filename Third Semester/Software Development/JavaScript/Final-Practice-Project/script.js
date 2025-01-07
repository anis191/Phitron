let btn1 = document.querySelector(".btn1");
let inp = document.querySelector(".ser");
btn1.addEventListener("click", ()=>{
    let txt = inp.value;
    fetch(`https://www.themealdb.com/api/json/v1/1/search.php?s=${txt}`)
        .then(res=>res.json())
        .then(data=>{
            DataSet(data.meals);
            // console.log(data.meals);
    })
    .catch(err =>{
        console.log(err);
    })
    inp.value = "";
})

let row = document.querySelector(".all-item");

const DataSet = (data) =>{
    let preDetails = document.querySelector("#details-div");
    if(preDetails){
        preDetails.remove();
    }
    row.innerHTML = "";
    data.forEach(obj => {
        let div = document.createElement("div");
        div.setAttribute("class","col all-div");
        div.innerHTML = `
        <img src="${obj.strMealThumb}" alt="Image" class="img-fluid">
        <h3>${obj.strMeal}</h3>
        `;
        div.addEventListener("click",()=>{
            let preDetails = document.querySelector("#details-div");
            if (preDetails) {
                preDetails.remove();
            }

            let details = document.createElement("div");
            details.setAttribute("id","details-div");
            details.setAttribute("class","col-4");
            details.innerHTML = `
            <img src="${obj.strMealThumb}" alt="Image" class="img-fluid">
            <h3>${obj.strMeal}</h3>
            <ul></ul>
            `;
            let ul = details.querySelector("ul");
            for (let i = 1; i <= 10; i++) {
                if(obj[`strIngredient${i}`].length != 0){
                    let li = document.createElement("li");
                    li.innerText = obj[`strIngredient${i}`];
                    ul.append(li);
                }
            }
            let header = document.querySelector("header");
            header.append(details);
        });
        row.append(div);
    });
}


/*
https://img.pikbest.com/origin/10/14/03/204pIkbEsT3Yj.jpg!w700wp
*/