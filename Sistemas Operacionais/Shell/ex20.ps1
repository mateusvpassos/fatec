Clear-Host
Write-Host 'Ex20'
[float]$horasTrab = Read-Host 'Digite horas trabalhadas'
[float]$valorHora = Read-Host 'Digite o valor da hora trabalhada'
[int]$desc = Read-Host 'Digite o percentual de desconto'

$salBruto = $horasTrab * $valorHora
$totDesc = $salBruto * ($desc/100)
$salarioLiq = $salBruto - $totDesc


Write-Host "$horasTrab horas trabalhadas, $salBruto salario bruto, $totDesc desconto, $salBruto de salario liquido"