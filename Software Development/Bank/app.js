
function deposit(){
    // console.log('click')
    var inputAmount=document.getElementById('deposit-amount').value
    // console.log(inputAmount);
    var convertInputAmount=convertToNumber(inputAmount);
    var depositAmount=document.getElementById('deposit-field').innerText;
    // console.log(depositAmount);
    var convertDepositAmount=convertToNumber(depositAmount);

    // console.log(convertDepositAmount+convertInputAmount);

    var totalDepositAmount=convertDepositAmount+convertInputAmount;
    document.getElementById('deposit-field').innerText=totalDepositAmount;
    document.getElementById('deposit-amount').value="";

    var totalAmount=document.getElementById('total-amount').innerText;

    var convertedTotalAmount=convertToNumber(totalAmount);

    var totalSum=convertInputAmount+convertedTotalAmount;

    document.getElementById('total-amount').innerText=totalSum;





}

function convertToNumber(value){
    return parseInt(value);
}

function withdraw(){
    var inputWithdraw=document.getElementById('withdraw-input').value;
    var convertedInputWithdraw=convertToNumber(inputWithdraw);
    // console.log(convertedInputWithdraw);
    var withdrawAmount=document.getElementById('withdraw-amount').innerText;
    var convertedWithdrawAmount=convertToNumber(withdrawAmount)

    var sum=convertedWithdrawAmount+convertedInputWithdraw;
    // console.log(sum);

    document.getElementById('withdraw-amount').innerText=sum;
    document.getElementById('withdraw-input').value="";


    var totalAmount=document.getElementById('total-amount').innerText;
    var convertedTotalAmount=convertToNumber(totalAmount);

    var totalSum=convertedTotalAmount-convertedInputWithdraw;
    document.getElementById('total-amount').innerText=totalSum;





}