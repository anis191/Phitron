fetch('https://fakestoreapi.com/products')
    .then(res=>res.json())
    .then((dataset)=>{
        DataSet(dataset);
    })
    .catch((err)=>{
        console.log(err);
    });

const DataSet = (dataset)=>{
    let container = document.querySelector(".products");
    dataset.forEach(data => {
        let div = document.createElement("div");
        div.setAttribute("class", "div");
        div.innerHTML = `
        <img class="pro-img" src="${data.image}" alt="Image" />
        <h4>${data.title.slice(0,50)}</h4>
        <span>Price: ${data.price}$</span>
        <p>${data.description.slice(0,50)}</p>
        <button class="btn b1">Details</button>
        <button class="btn b2" onclick="AddToCart('${data.id}', '${data.title.slice(0,10)}', '${data.price}')">Add To Cart</button>
        `;
        container.append(div);
    });
};

let total = 0;
let tk = 0;
let TotalProduct = document.querySelector(".total-product");
let totalPrice = document.querySelector(".total-price");
let itemList = document.querySelector(".itemList");
const AddToCart = (id, name, price) =>{
    total ++;
    tk += Number(price);
    TotalProduct.innerText = ` + ${total}`;
    totalPrice.innerText = `Total: ${tk.toFixed(2)}$`;
    let div = document.createElement("div");
    div.setAttribute("class","cart-divs");
    div.innerHTML = `
    <p>Product Id:${id}\tName:${name}\tPrice:${price}</p>
    `;
    itemList.append(div);
}

let DetailsBtn = document.querySelector(".details");
itemList.style.display = "none";
let ck = "hide";
DetailsBtn.addEventListener("click",()=>{
    if(ck === "hide"){
        itemList.style.display = "block";
        ck = "visiable";
    }else{
        itemList.style.display = "none";
        ck = "hide";
    }
});