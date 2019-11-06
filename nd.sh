mkdir vienas du;
touch vienas/pirmas_failas vienas/antras_failas;
cp vienas/pirmas_failas vienas/antras_failas du/;
rm vienas/pirmas_failas vienas/antras_failas;
cp du/pirmas_failas du/antras_failas vienas/;
rm -r du/;
