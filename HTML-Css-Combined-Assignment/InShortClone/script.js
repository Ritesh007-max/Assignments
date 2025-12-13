const container = document.querySelector("#container");
const loadMore = document.querySelector("#loadMore");

let startIndex = 0;

function createCards(article) {
    const card = document.createElement("div");
    card.classList.add("card");

    const imgDiv = document.createElement("div");
    imgDiv.classList.add("div-img");

    const img = document.createElement("img");
    img.src = article.urlToImage;
    imgDiv.appendChild(img);

    const textDiv = document.createElement("div");
    textDiv.classList.add("div-text");

    const title = document.createElement("h3");
    title.textContent = article.title;

    const date = document.createElement("p");
    date.textContent = `Date & Time: ${article.publishedAt}`;

    const content = document.createElement("h4");
    content.textContent = article.description;

    const author = document.createElement("p");
    author.textContent = `Author: ${article.author}`;

    textDiv.appendChild(title);
    textDiv.appendChild(date);
    textDiv.appendChild(content);
    textDiv.appendChild(author);

    card.appendChild(imgDiv);
    card.appendChild(textDiv);
    container.appendChild(card);
}


function ApiCall() {
    fetch("https://newsapi.org/v2/everything?q=tesla&from=2025-11-10&sortBy=publishedAt&apiKey=29a971708e82431d914ff5e21ffb979e")
        .then((response) => { return response.json() })
        .then((data) => {
            try {
                for (let i = startIndex; i < startIndex + 10; i++) {
                    createCards(data.articles[i]);
                }
                startIndex+= 10
            }
            catch {(error) => {

            }}
        });

}

document.addEventListener("DOMContentLoaded", ApiCall);
loadMore.addEventListener('click', ApiCall);