<?php
public function someFunctionWithAVeryLongName($firstParameter='something',
   $secondParameter='booooo',
   $third=null, $fourthParameter=false,
     $fifthParameter=123.12,
    $sixthParam=true
){
}

function someFunctionWithAVeryLongName2(
$firstParameter='something',
$secondParameter='booooo',
)  {
}

function blah() {
}

function blah()
{
}

class MyClass
{

    public function someFunctionWithAVeryLongName(
        $firstParameter='something',
        $secondParameter='booooo',
        $third=null,
        $fourthParameter=false,
        $fifthParameter=123.12,
        $sixthParam=true
    ) /** w00t */ {
    }

    public function someFunctionWithAVeryLongName2($firstParameter='something',
        $secondParameter='booooo',
        $third=null
    ) {
    }

     public function someFunctionWithAVeryLongName3(
         $firstParameter, $secondParameter, $third=null
     ) {
     }

     public function someFunctionWithAVeryLongName4(
         $firstParameter, $secondParameter
     ) {
     }

     public function someFunctionWithAVeryLongName5(
         $firstParameter,
         $secondParameter=array(1,2,3),
         $third=null
     ) {
     }

}

$noArgs_longVars = function () use (
    $longVar1,
    $longerVar2,
    $muchLongerVar3
) {
    // body
};

$longArgs_longVars = function (
    $longArgument,
    $longerArgument,
    $muchLongerArgument
) use (
    $longVar1,
    $longerVar2,
    $muchLongerVar3
) {
    // body
};

$longArgs_longVars = function ($longArgument,
    $muchLongerArgument) use ($muchLongerVar3
) {
    // body
};

$noArgs_longVars = function () use (
    $longVar1,  $longerVar2,
    $muchLongerVar3
) {
    // body
};
?>
