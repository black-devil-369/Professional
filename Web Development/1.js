let name = prompt('Enter your name');
let age  = prompt('Enter your age');
let entryAge = 18;
let seniorAge = 60;
alert('Your name is ${name} and your age ${age} year old');
if(age>entryAge && age<=seniorAge){
    swal({
        title: "Great!",
        text: "Welcome to La La Land!",
        icon: "success",
        });
} else if(age>seniorAge){
    swal({
        title: "Awesome!",
        text: "Welcome Sir/Mam to La La Land!",
        icon: "info",
        });
}else{
    swal({
        title: "Oops!",
        text: "Sorry Buddy!",
        icon: "warning",
        });
}