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


    }
    return input_text_to_cypher;

}
//uncypher function

QString uncypher_text(QString input_text_to_uncypher_it){


    return input_text_to_uncypher_it;
}
