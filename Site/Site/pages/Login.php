<!DOCTYPE HTML>
<html>
<head>
<meta charset="utf-8">
<title>Flat Design</title>
<link href="../CSS/estilo.css" rel="stylesheet" type="text/css">
<!--<script src="http://ajax.googleapis.com/ajax/libs/jquery/1.7.2/jquery.min.js" type="text/javascript" charset="utf-8"></script>
	<script src="javascript\specimen_files\easytabs.js" type="text/javascript" charset="utf-8"></script>-->
</head>

<body>

<div class="container">


	<div class="upperbar"> . </div>
	<a href="../logout.php" class= "button4 four">Sair</a>


	<div align="center" class="header">Agenda<span>PHP</span></div>


	<div class="hr"><hr></div>


    <div class="menu" align="center">
    
       <a class="button1 one"></a>
           
        	<a  class="button1 one"></a>
                
               <!--<a href="formulario.html" class="button1 one">Fale Conosco</a>
                
                	<a href="pages/frame.html" class="button1 one">Frame =)</a>-->
	</div>
    

	<div class="hr"><hr></div>

		<br>

  <div class="content" align="center"> 
    
   <h3 class="header1">Entrar</h3>
   
	<form action="..\valida.php" method="POST">
		<label for="usuario" align="center">Usuario:</label>
		<br />
			<input type="text" name="usuario" id="usuario" required/>
			<br />
			<br />
		<label for="senha" align="center">Senha:</label>
		<br />
		<input type="password" name="senha" id="senha" align="center"required/>
			<br />
			<br />
		<input type="submit" value="Enviar" name="Enviar" align="center" class="button2 two"/>
	</form>
  
  </div>


           
</div>
<div class="footer">.</div> 
</body>
</html>
