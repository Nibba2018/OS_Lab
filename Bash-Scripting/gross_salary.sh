read -p "Enter basic salary:" bsalary
if [[ bsalary < 1500 ]];
then
    HRA=$(( ($bsalary/100)*10 ))
    DA=$(( ($bsalary/100)*90 ))
else
    HRA=500
    DA=$(( ($bsalary/100)*98 ))
fi

echo "Gross Salary:$(( $bsalary+$HRA+$DA ))"
