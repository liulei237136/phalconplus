<?php
include dirname(__DIR__) . "/bootstrap.php";

use PhalconPlus\Test\Models\Classicmodels\EmployeesModel;
use Phalcon\Mvc\Model\Resultset;

$a = EmployeesModel::findFirst(
    "employeeNumber = '1056' AND extension='x4611'"
);

var_dump($a->getUniqueFields());

$a->setUpdateCondition([
    'reportsTo = ?', 
    'bind' => [
        $a->reportsTo
    ],
]);

$a->firstName = "Mary" . rand(11111, 9999);

var_dump($a->getUniqueFields());

$a->save();

$exist = $a->exists();
var_dump($exist);

var_dump($a->getUniqueFields());

echo json_encode($a);
