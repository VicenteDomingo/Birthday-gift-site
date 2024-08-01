body {
    font-family: 'Happy Monkey', sans-serif;
    text-align: center;
    /*background-color: #a2d2ff;*/
    background: linear-gradient(#a2d2ff, pink );
    color: white;
}

h1, h2, h3, h4, p {
    text-shadow: 0px 0px 1px black ;
}

#bff-img {
    width: 150px;
    border-radius: 50%;
}

#bday-age {
    background: #EFB0C9;
    padding: 5px 10px;
    border-radius: 5px;
    margin: 5px 0 10px 0;
}

#bday-date {
    margin: 0px;
    background: #EFB0C9;
    padding: 5px 10px;
    border-radius: 5px;
}

#header {
    display: flex;
    flex-direction: column;
    align-items: center;
}

.gift-section {
    margin-top: 50px;
}

.gift-title {
    margin-bottom: 10px;
}
.gift-hint {
    margin-top: 0px;
}

.gift-img {
    margin-left: auto;
    margin-right: auto;
    width: 400px;
    height: 400px;
    border: 6px solid white;
    border-radius: 10px;
    background-image: url("images/gift-cover.jpg");
    background-size: cover ; 
}

#gift-img-happy:hover {
    background-image: url(/images/happy.gif);
}

#gift-img-hot:hover {
    background-image: url(/images/hot.gif);
}

#gift-img-genius:hover {
    background-image: url(/images/genius.gif);
}

#gift-img-badass:hover {
    background-image: url(/images/badass.gif);
}

#gift-img-cheers {
    height: 200px;
}
#gift-img-cheers:hover {
    background-image: url(/images/cheers.gif);
}

#footer {
    margin: 50px auto 30px auto;
    width: 400px;
    font-style: italic;
}

a {
    color: white;
}