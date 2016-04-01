	<?php
		//require_once 'classe/conexao.class.php';
		//require_once 'classe/crud.class.php';
	function __autoload($classe)
	{
	include_once ("../classe/$classe.class.php");
	}
		$con = new conexao(); 
		$con->connect(); 
		@$getId = $_GET['codigo'];
		if(@$getId){
			$consulta1 = mysql_query("SELECT * FROM tbagenda WHERE codigo = + $getId");
			$campo = mysql_fetch_array($consulta1);
		}
	?>
	<!DOCTYPE html>
	<html>
		<head>
		<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
		<title></title>
		<link href="../CSS/estilo.css" rel="stylesheet" type="text/css">
		<script src="http://ajax.googleapis.com/ajax/libs/jquery/1.7.2/jquery.min.js" type="text/javascript" charset="utf-8"></script>		
		</head>
		
		<body>

<div class="container">

	<div class="upperbar"> . </div>
	<a href="../logout.php" class= "button4 four">Sair</a>


	<div align="center" class="header"><a href="../index.php">Agenda<span>PHP</span> </a></div>


	<div class="hr"><hr></div>


    <div class="menu" align="center">
    
    <a href="../index.php" class="button1 one">Home</a>   
    
    	<a href="formulario.php" class="button1 one">Novo Cadastro</a>
           
        	<!--<a href="VisualizarGeral.php" class="button1 one">Agenda</a>
            
            	<a href="frame.html" class="button1 one">Frame =)</a>-->
                
	</div>
    

	<div class="hr"><hr></div>

		<br>

 <div class="content" align="center"> <br><br><br>
  
    <form method="post" action="../AlterarInfo.php">
    
			<label>Codigo:</label>
			<input type="text" name="codigo" value="<?php echo @$campo['codigo'];?>" readonly/>
		<br />
		<br />
			<label>Nome:</label>
			<input type="text" name="Nome" value="<?php echo @$campo['Nome'];?>"/>
		<br />
		<br />
			<label>Sobrenome:</label>
			<input type="text" name="Sobrenome" value="<?php echo @$campo['Sobrenome'];?>"/>
		<br />
		<br />
			<label>Aniversario:</label>
			<input type="date" name="Aniversario" value="<?php echo @$campo['Aniversario'];?>"/>
		<br />
		<br />
			<label>Endereço:</label>
			<input type="text" name="Endereco" value="<?php echo @$campo['Endereco'];?>"/>
		<br />
		<br />
			<label>Telefone:</label>
			<input type="text" name="Telefone" value="<?php echo @$campo['Telefone'];?>"/>
		<br />
		<br />
			<label>CPF:</label>
			<input type="text" name="CPF" value="<?php echo @$campo['CPF'];?>"/>
		<br />
		<br />
			<label>Email:</label>
			<input type="text" name="Email" value="<?php echo @$campo['Email'];?>"/>
		<br />
		<br />
			<input type="submit" name="Alterar" value="Alterar" class="button2 two"/>
    </form>
    </div>
        
	<div class="footer"> . </div>
            
            
</div>
		</body>
	</html>