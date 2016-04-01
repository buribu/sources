<!DOCTYPE HTML>
<html>
<head>
<meta charset="utf-8">
<title>Agenda PHP</title>
<link href="../CSS/estilo.css" rel="stylesheet" type="text/css">
<!--<script src="http://ajax.googleapis.com/ajax/libs/jquery/1.7.2/jquery.min.js" type="text/javascript" charset="utf-8"></script>
<script src="../javascript/specimen_files/easytabs.js" type="text/javascript" charset="utf-8"></script>-->
</head>

<body>

<div class="container">

	<div class="upperbar"> . </div>
	<a href="../logout.php" class= "button4 four">Sair</a>


	<div align="center" class="header"><a href="VisualizarGeral.php">Agenda<span>PHP</span></div>


	<div class="hr"><hr></div>


    <div class="menu" align="center">
    
    <a href="../formulario.php" class="button1 one">Novo Cadastro</a>   
    
    	<a href="visualizargeral.php" class="button1 one">Agenda</a>
           
        	<!--<a href="VisualizarGeral.php" class="button1 one">Agenda</a>
            
            	<a href="frame.html" class="button1 one">Frame =)</a>-->
                
	</div>
    

	<div class="hr"><hr></div>

		<br>

 <div class="content" align="center" > <br><br><br>
  
    <form method="post" action="../Cadastro.php">
    
    <input type="hidden" name="titulo" value="formulario">
    
        <span class="span1">Nome: <input type="text" name="nome" value=" " maxlength="70"><br><br>
		Sobrenome: <input type="text" name="sobrenome" value=" " maxlength="70"><br><br>
		Aniversário: <input type="date" name="aniversario" value=" " maxlength="70"><br><br>
		EndereÇo: <input type="text" name="endereco" value=" " maxlength="40"><br><br>
		Telefone: <input type="text" name="telefone" value=" " maxlength="40"><br><br>
		CPF: <input type="text" name="cpf" value=" " maxlength="40"><br><br>
        Email: <input type="text" name="email" value=" " maxlength="40"><br><br></span>
			<input type="submit" name="cadastrar" value="cadastrar" class="button2 two"><br><br>
    </form>
    </div>
        
	<div class="footer"> . </div>
            
            
</div>
</body>
</html>
