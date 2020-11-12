read -p "Enter character:" char
if [[ $char == *[AEIOUaeiou]* ]];
then
    echo "$char is Vowel"
else
    echo "$char is Consonant"
fi
