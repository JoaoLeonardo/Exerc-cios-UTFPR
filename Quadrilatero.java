package br.edu.utfpr.quadrilatero;

public class Quadrilatero {
    private int lado1;
    private int lado2;
    
    public Quadrilatero(){
    }
    public Quadrilatero(int lado1, int lado2) {
        this.lado1 = lado1;
        this.lado2 = lado2;
    }
    
    public void setLado1(int lado1) {  //em geral, set somento seta, para validar, crie um novo método (bool).
        this.lado1 = lado1;
    }
    public void setLado2(int lado2) {
        this.lado2 = lado2;
    }
    public int getLado1() {
        return lado1;
    }
    public int getLado2() {
        return lado2;
    }
    
    public int area(int num, int num2) {
        num *= num2;
        return num;
    }
    public int perimetro(int num, int num2) {
        num = num * 2 + num2 * 2;
        return num;
    }
    public boolean quadrado(int num, int num2) {
        return num == num2; 
    }
    public boolean retangulo(int num, int num2) {
        return num != num2;   
    }
    
    @Override
    public String toString() {
        return("Lado1: " + getLado1() + "\nLado 2: " + getLado2());
    }
    
    public boolean VrfLado(int ld) {
        return ld > 0;
    }
}
