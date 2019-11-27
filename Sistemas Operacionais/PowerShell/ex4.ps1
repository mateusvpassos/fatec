Clear-Host
Write-Host 'Ex4'
[float]$sal = Read-Host 'Digite o salario'
[float]$com = Read-Host 'Digite a comissão'
$salF = $sal + $com
Write-Host "$salF é o salário total"