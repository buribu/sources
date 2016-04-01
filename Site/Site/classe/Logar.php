<?php
session_start();
require_once('Conexao.php');
	
Class Logar{
	function __construct(){
		
		$objConexao = new Conexao1();
		
	}
	function verificarLogado(){
		if(!isset($_SESSION["logado"])){
			header("Location: dirname(__FILE__) /../Login.php");
			exit();
		}
	}
	
	function Acessar($usuario,$senha){
		
		$q_usuario = mysql_query(" select * from tbusuario where usuario = '".$usuario."' ");	
		
		if(mysql_num_rows($q_usuario) == 1){
		
			$d_usuario = mysql_fetch_array($q_usuario);
			echo $senha;
			if($d_usuario["senha"] == $senha){
				$_SESSION["id_usuario"] = $d_usuario["codigo"];
				$_SESSION["logado"] = "sim";
				echo("<script language='javascript' type='text/javascript'>
						document.url='../principal.php';
						window.location.href='pages/VisualizarGeral.php';
						</script>");
			}else{
				$Erro = "Senha e/ou Usuario errado(s)!";
				return $Erro;
			}
		}else{
			$Erro = "Senha e/ou Usuario errado(s)!";
			return $Erro;
		};		
	}
	
	function getIdUsuario(){
		return $_SESSION["id_usuario"];
	}
	
	
	function deslogar(){
		session_destroy();
		header("Location: dirname(__FILE__)/../index.php");
	}
}
?>