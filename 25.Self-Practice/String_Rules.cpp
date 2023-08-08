// Problem Statement
// You have given a string that will be contain a-z, 1-9, '+', '-', '*', '/'.
// The string contains some statements (at least one). A statement is defined as -

// NC (Here N is defined as a number from 1-9, and C is defined as a group of small alphabets)
// There will be an operator (+,-,*,/) between two statements
// You have to apply the below rules on that string.

// The Rules is,
// Append the group of alphabets (C) N times to the final string.
// Append the operators (if any) after the statements to the final string.
// Suppose the string is 5a+2bc-9abc*1d

// After apply,
// 5a wil become aaaaa
// 2bc will become bcbc
// 9abc become abcabcabcabcabcabcabcabcabc
// 1d will become d
// Finally the string will be like this after apply the string rules,

// aaaaa+bcbc-abcabcabcabcabcabcabcabcabc*d

// Input Format:
// You will be given a string S in the given format.