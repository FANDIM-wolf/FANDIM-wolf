#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
//cypher function

QString cypher_text(QString input_text_to_cypher_it){

    for(int i = 0; i<=input_text_to_cypher_it.length() ; i++){
            if(input_text_to_cypher_it[i] ==
                'a' ){
                 input_text_to_cypher_it[i] = 'n';
            }
            if(input_text_to_cypher_it[i] ==
                'b' ){
                 input_text_to_cypher_it[i] = 'j';
            }
            if(input_text_to_cypher_it[i] ==
                'c' ){
                 input_text_to_cypher_it[i] = 'i';
            }
            if(input_text_to_cypher_it[i] ==
                'd' ){
                 input_text_to_cypher_it[i] = 'k';
            }
            if(input_text_to_cypher_it[i] ==
                'e' ){
                 input_text_to_cypher_it[i] = 'i';
            }
            if(input_text_to_cypher_it[i] ==
                'f' ){
                 input_text_to_cypher_it[i] = 'c';
            }
            if(input_text_to_cypher_it[i] ==
                'g' ){
                 input_text_to_cypher_it[i] = 'd';
            }
            if(input_text_to_cypher_it[i] ==
                'h' ){
                 input_text_to_cypher_it[i] = 'a';
            }
            if(input_text_to_cypher_it[i] ==
                'i' ){
                 input_text_to_cypher_it[i] = 'f';
            }
            if(input_text_to_cypher_it[i] ==
                'j' ){
                 input_text_to_cypher_it[i] = 'b';
            }
            if(input_text_to_cypher_it[i] ==
                'k' ){
                 input_text_to_cypher_it[i] = 'e';
            }
            if(input_text_to_cypher_it[i] ==
                'l' ){
                 input_text_to_cypher_it[i] = 'g';
            }
            if(input_text_to_cypher_it[i] ==
                'm' ){
                 input_text_to_cypher_it[i] = 'h';
            }
            if(input_text_to_cypher_it[i] ==
                'n' ){
                 input_text_to_cypher_it[i] = 'r';
            }
            if(input_text_to_cypher_it[i] ==
                'o' ){
                 input_text_to_cypher_it[i] = 'p';
            }
            if(input_text_to_cypher_it[i] ==
                'p' ){
                 input_text_to_cypher_it[i] = 'm';
            }
            if(input_text_to_cypher_it[i] ==
                'q' ){
                 input_text_to_cypher_it[i] = 's';
            }
            if(input_text_to_cypher_it[i] ==
                'r' ){
                 input_text_to_cypher_it[i] = 'c';
            }
            if(input_text_to_cypher_it[i] ==
                's' ){
                 input_text_to_cypher_it[i] = 'c';
            }
            if(input_text_to_cypher_it[i] ==
                't' ){
                 input_text_to_cypher_it[i] = 'v';
            }
            if(input_text_to_cypher_it[i] ==
                'u' ){
                 input_text_to_cypher_it[i] = 't';
            }
            if(input_text_to_cypher_it[i] ==
                'v' ){
                 input_text_to_cypher_it[i] = 'o';
            }
            if(input_text_to_cypher_it[i] ==
                'w' ){
                 input_text_to_cypher_it[i] = 'q';
            }
            if(input_text_to_cypher_it[i] ==
                'x' ){
                 input_text_to_cypher_it[i] = 'z';
            }
            if(input_text_to_cypher_it[i] ==
                'y' ){
                 input_text_to_cypher_it[i] = 'w';
            }
            if(input_text_to_cypher_it[i] ==
                'z' ){
                 input_text_to_cypher_it[i] = 'x';
            }


    }
    return input_text_to_cypher_it;

}
//uncypher function

QString uncypher_text(QString input_text_to_uncypher_it){

    for(int i = 0; i<=input_text_to_uncypher_it.length() ; i++){
            if(input_text_to_uncypher_it[i] ==
                'n' ){


                 input_text_to_uncypher_it[i] = 'a';
                 //add valut to result

            }

    }
    return input_text_to_uncypher_it;
}
