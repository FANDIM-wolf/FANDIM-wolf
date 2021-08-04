#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
//cypher function

QString cypher_text(QString input_text_to_cypher_it){
 QString input_text_to_cypher;
    for(int i = 0; i< input_text_to_cypher_it.length() ; i++){
            if(input_text_to_cypher_it[i] ==
                'a' ){
                 input_text_to_cypher[i] = 'c';
            }
            if(input_text_to_cypher_it[i] ==
                'b' ){
                 input_text_to_cypher[i] = '+';
            }
            if(input_text_to_cypher_it[i] ==
                'c' ){
                 input_text_to_cypher[i] = 'a';
            }
            if(input_text_to_cypher_it[i] ==
                'd' ){
                 input_text_to_cypher[i] = 'e';
            }
            if(input_text_to_cypher_it[i] ==
                'e' ){
                 input_text_to_cypher[i] = 'd';
            }
            if(input_text_to_cypher_it[i] ==
                'f' ){
                 input_text_to_cypher[i] = 'g';
            }
            if(input_text_to_cypher_it[i] ==
                'g' ){
                 input_text_to_cypher[i] = 'f';
            }
            if(input_text_to_cypher_it[i] ==
                'h' ){
                 input_text_to_cypher[i] = 'j';
            }
            if(input_text_to_cypher_it[i] ==
                'i' ){
                 input_text_to_cypher[i] = 'k';
            }
            if(input_text_to_cypher_it[i] ==
                'j' ){
                 input_text_to_cypher[i] = 'h';
            }
            if(input_text_to_cypher_it[i] ==
                'k' ){
                 input_text_to_cypher[i] = 'i';
            }
            if(input_text_to_cypher_it[i] ==
                'l' ){
                 input_text_to_cypher[i] = 'm';
            }
            if(input_text_to_cypher_it[i] ==
                'm' ){
                 input_text_to_cypher[i] = 'l';
            }
            if(input_text_to_cypher_it[i] ==
                'n' ){
                 input_text_to_cypher[i] = 'p';
            }
            if(input_text_to_cypher_it[i] ==
                'o' ){
                 input_text_to_cypher[i] = 'n';
            }
            if(input_text_to_cypher_it[i] ==
                'p' ){
                 input_text_to_cypher[i] = 'o';
            }
            if(input_text_to_cypher_it[i] ==
                'q' ){
                 input_text_to_cypher[i] = 'r';
            }
            if(input_text_to_cypher_it[i] ==
                'r' ){
                 input_text_to_cypher[i] = 'q';
            }
            if(input_text_to_cypher_it[i] ==
                's' ){
                 input_text_to_cypher[i] = 't';
            }
            if(input_text_to_cypher_it[i] ==
                't' ){
                 input_text_to_cypher[i] = 's';
            }
            if(input_text_to_cypher_it[i] ==
                'u' ){
                 input_text_to_cypher[i] = 'v';
            }
            if(input_text_to_cypher_it[i] ==
                'v' ){
                 input_text_to_cypher[i] = 'u';
            }
            if(input_text_to_cypher_it[i] ==
                'w' ){
                 input_text_to_cypher[i] = 'y';
            }
            if(input_text_to_cypher_it[i] ==
                'x' ){
                 input_text_to_cypher[i] = 'z';
            }
            if(input_text_to_cypher_it[i] ==
                'y' ){
                 input_text_to_cypher[i] = 'w';
            }
            if(input_text_to_cypher_it[i] ==
                'z' ){
                 input_text_to_cypher[i] = 'x';
            }









    }
    return input_text_to_cypher;

}
//uncypher function

QString uncypher_text(QString input_text_to_uncypher_it){


    return input_text_to_uncypher_it;
}
