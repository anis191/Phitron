fetch('https://fakestoreapi.com/products')
    .then(res=>res.json())
    .then(data=>{
        // all_data(data)
        showData(data);
    })
    .catch((err) =>{
        console.log(err);
    });

// see all data in console-->
const all_data = (data) =>{
    data.forEach(user => {
        const keys = Object.keys(user);
        console.log(keys);
    });
};

const showData = (data) =>{
    let container = document.querySelector(".container");
    
    data.forEach(info =>{
        let div = document.createElement("div");
        div.setAttribute("class","div");
        div.innerHTML = `
        <h5>ID - ${info.id}</h5>
        <p>${info.title}</p>
        <span>${info.rating.rate}</span>
        <span>${info.rating.count}</span>
        `;
        container.append(div);
    })
};