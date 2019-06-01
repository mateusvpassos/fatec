Clear-Host
Write-Host 'Ex16'
[float]$sal = Read-Host 'Digite o salario'
[float]$des = Read-Host 'Digite as despesas'

$sob = $sal - $des
$al = $sob
$i = 1
while(1000000 -ge $sob){
    $i++
    $sob = $al + $sob
}
$an = $i / 12

Write-Host "$an anos para ficar milionário"