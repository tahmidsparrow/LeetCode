/* Source : https://leetcode.com/problems/find-customer-referee/
 Date   : Jun 21, 2024*/


/* The main trick of trick of this problem is the where condition as if use normal condition like "=". It will not consider the Null value.
And the proper output will not come.

MySQL does not have a NULL-safe not equal operator.
Though there is oter option to manage the Null safe operator, not all works for MySQL.
<=> is a MySQL extension NULL-safe equal operator. And we have to use Not operator seperately.
*/

Select name from Customer where Not referee_id <=> 2 Order by id;