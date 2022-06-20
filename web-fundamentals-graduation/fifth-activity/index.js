import express from 'express';
import { engine } from 'express-handlebars';

const app = express();

app.engine('handlebars', engine());
app.set('view engine', 'handlebars');
app.set('views', './src/views');

const books = [
    {
        id: 1,
        name: "JavaScript do Básico ao Avançado",
        price: 52.75
    },
    {
        id: 2,
        name: "Rust in Action",
        price: 72.90
    }
];

app.get('/', (req, res) => {
    res.render('home', {books});
});

app.get('/book/:id', (req, res) => {
    const book = books.find((item) => parseInt(item.id) === parseInt(req.params.id));
    
    res.render('book', {book});
});

app.listen(3000, () => console.log("The server is running on 3000 port"));