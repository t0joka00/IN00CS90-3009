var express = require('express');
var path = require('path');
var cookieParser = require('cookie-parser');
var logger = require('morgan');

var app = express();

const db = require('./database');
const helmet = require('helmet');
const cors = require('cors');

const userRouter = require('./routes/user');
const bookRouter = require('./routes/book');
const carRouter = require('./routes/car');

app.use(logger('dev'));
app.use(express.json());
app.use(express.urlencoded({ extended: false }));
app.use(cookieParser());
app.use(express.static(path.join(__dirname, 'public')));

app.use(helmet());
app.use(cors());

app.use('/user', userRouter);
app.use('/book', bookRouter);
app.use('/car', carRouter);

module.exports = app;

