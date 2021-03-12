#include <string>
#include <stdexcept>
using namespace std;

#include "snowman.hpp"
 namespace ariel {
     string snowman(int build){
         string sbuild = to_string(build);
         //check if the number matches the snowman build
         if(sbuild.size() != SIZE){
             throw invalid_argument("Invalid code \'" + sbuild + "\'");
         }
         
         char index = '0';  //the current number of a body part
         for(int i = 0; i < SIZE; i++){
            index = sbuild[i];
             if(index > '4' || index < '1'){
                 throw invalid_argument("Invalid code \'" + sbuild + "\'");
             }
         }
         string head = head_tmp;
         int i = 0; //index of the number in the sbuild
         //make a hat
         index = sbuild[i++];
         string snwhat = hat.at(index - '1');
         //make a nose
         index = sbuild[i++];
         head[3] = nose.at(index - '1');
         //make eyes
         index = sbuild[i++];
         head[2] = eyes.at(index - '1');
         index = sbuild[i++];
         head[4] = eyes.at(index - '1');
         //set arms
         char left = ' '; 
         char right = ' ';
         index = sbuild[i++];
         if(index == '2'){  //check for the arm postion
             head[0] = '\\';
         }
         else{
             left = Larm.at(index - '1');
         }
         index = sbuild[i++];
         if(index == '2'){    //check for the arm postion
             head[head.size() - 2] = '/';
         }
         else{
             right = Rarm.at(index - '1');
         }
         //make torso
         index = sbuild[i++];
         string torso = body.at(index - '1');
         torso[0] = left;
         torso[torso.size() - 2] = right;
         //make a base
         index = sbuild[i++];
         //connect the body parts
         string snwman = snwhat + head + torso + base.at(index - '1');
         return snwman;
     }
 }
