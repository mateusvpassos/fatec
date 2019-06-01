Clear-Host
Write-Host 'Ex15'
[float]$a = Read-Host 'Digite A'
[float]$b = Read-Host 'Digite B'
[float]$c = Read-Host 'Digite C'
[float]$d = Read-Host 'Digite D'
[float]$e = Read-Host 'Digite E'

$s = 6*$a + 5*$b + 4*$c + 3*$d + 2*$e
$digitV = $s % 7

Write-Host "$digitV Digito V"