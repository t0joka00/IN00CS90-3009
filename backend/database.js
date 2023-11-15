const mysql = require('mysql2');
const connection = mysql.createPool({
  host: 'localhost',
  user: 'netuser',
  password: 'netpass',
  database: 'netdb'
});
module.exports = connection;