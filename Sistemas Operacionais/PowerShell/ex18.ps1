Clear-Host
Write-Host 'Ex18'
[float]$salario = Read-Host 'Digite o salario'

$salSL = $salario - ($salario*0.1)
$salarioLiquido = $salSL - ($salSL*0.05)

Write-Host "$salarioLiquido de salário liquido"