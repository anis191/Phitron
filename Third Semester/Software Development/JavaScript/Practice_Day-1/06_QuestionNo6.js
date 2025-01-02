var friends = ["rahim", "karim", "abdul", "sadsd", "heroAlom"];

const Name = friends.reduce((prev, curr) =>{
    return (prev.length > curr.length) ? prev : curr;
});

document.write(Name);
console.log(Name);