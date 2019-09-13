package br.edu.utfpr.quadrilatero;

import javax.swing.JOptionPane;

public class TestQuad {
     public static int Menu1() {
        int num;
        num = Integer.parseInt(JOptionPane.showInputDialog("[1] Área\n[2] Perímetro\n[3] Vrf. Quadrado\n[4] Vrf. Retângulo"));
        return(num);
    }
    
    public static void main(String[] args) {
        int lado1, lado2, escolha;
        boolean cat;
        Quadrilatero quad = new Quadrilatero();
        
        do {
            escolha = Menu1();
            if(escolha > 0 && escolha < 5) {
                do {
                    quad.setLado1(lado1 = Integer.parseInt(JOptionPane.showInputDialog("Insira o primeiro lado: ")));
                    cat = quad.VrfLado(lado1);
                }while(cat == false);
                do {
                    quad.setLado2(lado2 = Integer.parseInt(JOptionPane.showInputDialog("Insira o segundo lado: ")));
                    cat = quad.VrfLado(lado2);
                }while(cat == false);
                JOptionPane.showMessageDialog(null,quad.toString());

                switch(escolha) {
                    case 1:
                        lado1 = quad.area(lado1, lado2);
                        JOptionPane.showMessageDialog(null, "Área: "+lado1);
                        break;
                    case 2:
                        lado1 = quad.area(lado1, lado2);
                        JOptionPane.showMessageDialog(null, "Área: "+lado1);
                        break;
                    case 3:
                        cat = quad.quadrado(lado1, lado2);
                        if(cat) {
                            JOptionPane.showMessageDialog(null, "É quadrado.");
                        }
                        else {
                            JOptionPane.showMessageDialog(null, "Não é quadrado.");
                        }
                        break;
                    case 4:
                        cat = quad.retangulo(lado1, lado2);
                        if(cat) {
                            JOptionPane.showMessageDialog(null, "É retângulo.");
                        }
                        else {
                            JOptionPane.showMessageDialog(null, "Não é retângulo.");
                        }
                        break;
                    default:
                        break;
                }
            }       
        }while(escolha > 0 && escolha < 5);
    }   
}
