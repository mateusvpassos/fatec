Clear-Host
Write-Host 'Ex9'
[float]$salAtual = Read-Host 'Digite o salario atual'
[float]$perc = Read-Host 'Digite percentual de reajuste'
$salF = $salAtual +  ($salAtual * ($perc/100))
Write-Host "$salF salario final"