Clear-Host
Write-Host 'Ex5'
[int]$n1 = Read-Host 'Digite o primeiro numero'
[int]$n2 = Read-Host 'Digite o segundo numero'
[int]$quo = $n1 / $n2
$resto = $n1 % $n2
Write-Host "$quo é o quociente, $resto é o resto"