#ifndef BIGCHAR_H
#define BIGCHAR_H

/****************************************************************
 *  Character elements
 * 
 *  0 = ��  1 = ��  2 = �X  3 = X�   S = ��
 *      X�      �X      ��      ��       ��
 * 
 *  4 = ��  5 = XX  6 = X�  7 = XX   F = XX
 *      XX      ��      XX      X�       XX
 */

/****************************************************************
 * Normal charset
 */
int normal[96][3*4] = {
  {
    S,S,S,
    S,S,S,
    S,S,S,
    S,S,S,
  }, // ' '
  {
    S,4,S,
    S,F,S,
    S,5,S,
    S,5,S,
  }, // !
  {
    4,S,4,
    5,S,5,
    S,S,S,
    S,S,S,
  }, // "          "
  {
    4,S,4,
    F,5,F,
    F,4,F,
    5,S,5,
  }, // #
  {
    1,F,0,
    2,F,0,
    4,F,3,
    S,5,S,
  }, // $
  {
    4,S,1,
    S,1,3,
    1,3,S,
    3,S,5,
  }, // %
  {
    1,4,0,
    2,4,3,
    1,5,7,
    2,5,6,
  }, // &
  {
    S,4,S,
    S,7,S,
    S,S,S,
    S,S,S,
  }, // '
  {
    S,1,4,
    S,F,S,
    S,F,S,
    S,2,5,
  }, // (
  {
    4,0,S,
    S,F,S,
    S,F,S,
    5,3,S,
  }, // )
  {
    S,4,S,
    0,F,1,
    3,F,2,
    S,5,S,
  }, // *
  {
    S,4,S,
    4,F,4,
    S,5,S,
    S,S,S,
  }, // +
  {
    S,S,S,
    S,S,S,
    S,4,S,
    S,7,S,
  }, // ,
  {
    S,S,S,
    4,4,4,
    S,S,S,
    S,S,S,
  }, // -
  {
    S,S,S,
    S,S,S,
    S,S,S,
    S,5,S,
  }, // .
  {
    S,S,1,
    S,1,3,
    1,3,S,
    3,S,S,
  }, // /
   {
     1,4,0,
     F,S,F,
     F,S,F,
     2,5,3,
   }, // 0
   {
     1,4,S,
     S,F,S,
     S,F,S,
     5,5,5,
   }, // 1
   {
     1,4,0,
     S,1,7,
     1,3,S,
     5,5,5,
   }, // 2
   {
     1,4,0,
     S,1,7,
     S,2,6,
     2,5,3,
   }, // 3
   {
     4,S,4,
     F,4,F,
     S,S,F,
     S,S,5,
   }, // 4
   {
     4,4,4,
     F,4,0,
     S,S,F,
     2,5,3,
   }, // 5
   {
     1,4,0,
     F,4,0,
     F,S,F,
     2,5,3,
   }, // 6
   {
     4,4,4,
     S,1,7,
     S,F,S,
     S,5,S,
   }, // 7
   {
     1,4,0,
     2,4,3,
     1,5,0,
     2,5,3,
   }, // 8
   {
     1,4,0,
     F,4,F,
     S,S,F,
     2,5,3,
   }, // 9
   {
     S,S,S,
     S,5,S,
     S,4,S,
     S,S,S,
   }, // :
   {
     S,S,S,
     S,5,S,
     S,4,S,
     S,3,S,
   }, // ;
   {
     S,1,S,
     1,7,S,
     2,6,S,
     S,2,S,
   }, // <
   {
     S,S,S,
     5,5,5,
     4,4,4,
     S,S,S,
   }, // =
   {
     0,S,S,
     2,6,S,
     1,7,S,
     3,S,S,
   }, // >
   {
     1,4,0,
     2,1,7,
     S,5,S,
     S,5,S,
   }, // ?
   {
     1,4,0,
     F,1,F,
     F,2,3,
     2,5,5,
   }, // @
   {
     1,4,0,
     F,S,F,
     F,5,F,
     5,S,5,
   }, // A
   {
     4,4,0,
     F,4,7,
     F,2,6,
     5,5,3,
   }, // B
   {
     1,4,0,
     F,S,5,
     F,S,4,
     2,5,3,
   }, // C
   {
     4,4,0,
     F,S,F,
     F,S,F,
     5,5,3,
   }, // D
   {
     4,4,4,
     F,4,S,
     F,S,S,
     5,5,5,
   }, // E
   {
     4,4,4,
     F,4,S,
     F,S,S,
     5,S,S,
   }, // F
   {
     1,4,0,
     F,S,S,
     F,5,F,
     2,5,3,
   }, // G
   {
     4,S,4,
     F,S,F,
     F,4,F,
     5,S,5,
   }, // H
   {
     4,4,4,
     S,F,S,
     S,F,S,
     5,5,5,
   }, // I
   {
     4,4,4,
     S,F,S,
     0,F,S,
     2,5,S,
   }, // J
   {
     4,S,4,
     F,1,7,
     F,2,6,
     5,S,5,
   }, // K
   {
     4,S,S,
     F,S,S,
     F,S,S,
     5,5,5,
   }, // L
   {
     0,S,1,
     F,5,F,
     F,S,F,
     5,S,5,
   }, // M
   {
     0,S,4,
     F,0,F,
     F,2,F,
     5,S,5,
   }, // N
   {
     1,4,0,
     F,S,F,
     F,S,F,
     2,5,3,
   }, // O
   {
     4,4,0,
     F,4,7,
     F,S,S,
     5,S,S,
   }, // P
   {
     1,4,0,
     F,S,F,
     F,S,F,
     2,5,6,
   }, // Q
   {
     4,4,0,
     F,4,7,
     F,2,6,
     5,S,5,
   }, // R
   {
     1,4,0,
     2,0,S,
     0,2,6,
     2,5,3,
   }, // S
   {
     4,4,4,
     S,F,S,
     S,F,S,
     S,5,S,
   }, // T
   {
     4,S,4,
     F,S,F,
     F,S,F,
     2,5,3,
   }, // U
   {
     4,S,4,
     F,S,F,
     F,1,7,
     5,3,5,
   }, // V
   {
     4,S,4,
     F,S,F,
     F,4,F,
     3,S,2,
   }, // W
   {
     4,S,4,
     2,1,7,
     1,3,6,
     5,S,5,
   }, // X
   {
     4,S,4,
     2,4,3,
     S,F,S,
     S,5,S,
   }, // Y
   {
     4,4,4,
     S,1,7,
     1,3,S,
     5,5,5,
   }, // Z , We could leave this one out...it isn't on the keypad so... ;)
   {
     4,4,S,
     F,S,S,
     F,S,S,
     5,5,S,
   }, // [
   {
     S,S,S,
     S,S,S,
     S,S,S,
     S,S,S,
   }, // �
   {
     S,4,4,
     S,S,F,
     S,S,F,
     S,5,5,
   }, // ]
   {
     S,1,S,
     1,3,6,
     3,S,2,
     S,S,S,
   }, // ^
   {
     S,S,S,
     S,S,S,
     S,S,S,
     4,4,4,
   }, // _
   {
     S,2,S,
     S,S,S,
     S,S,S,
     S,S,S,
   }, // `
   {
     S,S,S,
     1,4,0,
     1,4,F,
     2,5,3,
   }, // a
   {
     4,S,S,
     F,S,S,
     F,5,6,
     5,5,3,
   }, // b
   {
     S,S,S,
     1,4,0,
     F,S,1,
     2,5,3,
   }, // c
   {
     S,S,4,
     S,S,F,
     1,5,F,
     2,5,5,
   }, // d
   {
     S,S,S,
     1,4,0,
     F,5,3,
     2,5,3,
   }, // e
   {
     1,4,0,
     F,4,S,
     F,S,S,
     5,S,S,
   }, // f
   {
     S,S,S,
     1,4,0,
     2,5,F,
     2,4,7,
   }, // g
   {
     4,S,S,
     F,S,S,
     F,5,6,
     5,S,5,
   }, // h
   {
     S,4,S,
     S,4,S,
     S,F,S,
     S,5,S,
   }, // i
   {
     S,S,4,
     S,S,4,
     S,S,F,
     2,4,7,
   }, // j
   {
     4,S,S,
     F,1,7,
     F,5,6,
     5,S,5,
   }, // k
   {
     S,4,S,
     S,F,S,
     S,F,S,
     S,2,3,
   }, // l
   {
     S,S,S,
     0,0,0,
     F,5,F,
     5,S,5,
   }, // m
   {
     S,S,S,
     0,1,0,
     F,3,F,
     5,S,5,
   }, // n
   {
     S,S,S,
     1,4,0,
     F,S,F,
     2,5,3,
   }, // o
   {
     S,S,S,
     4,4,0,
     F,4,3,
     5,S,S,
   }, // p
   {
     S,S,S,
     1,4,4,
     F,1,F,
     S,S,F,
   }, // q
   {
     S,S,S,
     4,1,0,
     F,3,2,
     5,S,S,
   }, // r
   {
     S,S,S,
     1,4,0,
     2,5,6,
     2,5,3,
   }, // s
   {
     S,1,S,
     5,F,5,
     S,F,S,
     S,2,3,
   }, // t
   {
     S,S,S,
     4,S,4,
     F,S,F,
     2,5,3,
   }, // u
   {
     S,S,S,
     4,S,1,
     F,1,7,
     2,3,S,
   }, // v
   {
     S,S,S,
     4,S,4,
     F,4,F,
     3,3,3,
   }, // w
   {
     S,S,S,
     0,S,1,
     S,F,S,
     3,S,2,
   }, // x
   {
     S,S,S,
     0,S,1,
     2,F,3,
     1,7,S,
   }, // y
   {
     S,S,S,
     4,4,4,
     1,7,3,
     5,5,5,
   }, // z
   {
     S,1,4,
     4,F,S,
     5,F,S,
     S,2,5,
   }, // {
   {
     S,4,S,
     S,F,S,
     S,F,S,
     S,5,S,
   }, // |
   {
     4,0,S,
     S,F,4,
     S,F,5,
     5,3,S,
   }, // }
   {
     S,1,S,
     1,7,4,
     2,6,5,
     S,2,S,
   }, // <-
   {
     S,0,S,
     4,2,6,
     5,1,7,
     S,3,S,
   }, // ->
 
 };
 
 
 
 /////////////////////////////////////////////////////////////////
 // 'Italic' charset
 //
 int italic[96][3*4] = {
   {
     S,S,S,
     S,S,S,
     S,S,S,
     S,S,S,
   }, // ' '
   {
     S,1,S,
     S,F,S,
     S,5,S,
     S,3,S,
   }, // !
   {
     4,S,1,
     3,S,5,
     S,S,S,
     S,S,S,
   }, // "          "
   {
     4,S,1,
     F,5,F,
     F,4,F,
     3,S,5,
   }, // #
   {
     1,F,0,
     2,F,0,
     4,F,3,
     S,5,S,
   }, // $
   {
     4,S,1,
     S,1,3,
     1,3,S,
     3,S,5,
   }, // %
   {
     1,4,0,
     2,4,3,
     1,5,7,
     2,5,6,
   }, // &
   {
     S,1,S,
     S,7,S,
     S,S,S,
     S,S,S,
   }, // '
   {
     S,1,S,
     S,F,S,
     S,F,S,
     S,2,S,
   }, // (
   {
     S,0,S,
     S,F,S,
     S,F,S,
     S,3,S,
   }, // )
   {
     S,1,S,
     0,F,1,
     3,F,2,
     S,3,S,
   }, // *
   {
     S,1,S,
     4,F,4,
     S,7,S,
     S,S,S,
   }, //  
   {
     S,S,S,
     S,S,S,
     S,1,S,
     S,7,S,
   }, // ,
   {
     S,S,S,
     1,4,4,
     S,S,S,
     S,S,S,
   }, // -
   {
     S,S,S,
     S,S,S,
     S,S,S,
     S,3,S,
   }, // .
   {
     S,S,1,
     S,1,3,
     1,3,S,
     3,S,S,
   }, // /
   {
     1,4,0,
     F,S,F,
     F,1,7,
     2,3,S,
   }, // 0
   {
     1,4,S,
     S,F,S,
     S,7,S,
     5,5,3,
   }, // 1
   {
     1,4,0,
     S,1,7,
     1,3,S,
     5,5,3,
   }, // 2
   {
     1,4,0,
     S,1,7,
     0,1,7,
     2,3,S,
   }, // 3
   {
     1,S,1,
     F,4,F,
     S,1,7,
     S,5,S,
   }, // 4
   {
     4,4,4,
     F,4,0,
     0,1,7,
     2,3,S,
   }, // 5
   {
     1,4,0,
     F,4,0,
     F,1,7,
     2,3,S,
   }, // 6
   {
     4,4,4,
     S,1,7,
     1,7,S,
     3,S,S,
   }, // 7
   {
     1,4,0,
     2,1,7,
     1,3,6,
     2,5,3,
   }, // 8
   {
     1,4,0,
     F,4,F,
     0,1,7,
     2,3,S,
   }, // 9
   {
     S,S,S,
     S,3,S,
     S,1,S,
     S,S,S,
   }, // :
   {
     S,S,S,
     S,3,S,
     S,1,S,
     S,3,S,
   }, // ;
   {
     S,1,S,
     1,7,S,
     2,6,S,
     S,2,S,
   }, // <
   {
     S,S,S,
     5,5,3,
     1,4,4,
     S,S,S,
   }, // =
   {
     0,S,S,
     2,6,S,
     1,7,S,
     3,S,S,
   }, // >
   {
     1,4,0,
     2,1,7,
     S,5,S,
     S,5,S,
   }, // ?
   {
     1,4,0,
     F,1,F,
     F,2,3,
     2,5,5,
   }, // @
   {
     1,4,0,
     F,1,F,
     F,3,F,
     3,S,5,
   }, // A
   {
     4,4,0,
     F,1,7,
     F,2,6,
     5,5,3,
   }, // B
   {
     1,4,0,
     F,S,2,
     F,S,1,
     2,5,3,
   }, // C
   {
     4,4,0,
     F,S,F,
     F,1,7,
     5,3,S,
   }, // D
   {
     4,4,4,
     F,1,S,
     F,3,S,
     5,5,3,
   }, // E
   {
     4,4,4,
     F,1,S,
     F,3,S,
     3,S,S,
   }, // F
   {
     1,4,0,
     F,1,4,
     F,3,F,
     2,5,3,
   }, // G
   {
     4,S,1,
     F,1,F,
     F,3,F,
     3,S,5,
   }, // H
   {
     1,4,4,
     S,F,S,
     S,F,S,
     5,5,3,
   }, // I
   {
     4,4,4,
     S,2,6,
     0,1,7,
     2,3,S,
   }, // J
   {
     4,S,1,
     F,1,7,
     F,3,0,
     3,S,5,
   }, // K
   {
     1,S,S,
     F,S,S,
     F,S,1,
     5,5,3,
   }, // L
   {
     0,S,1,
     F,7,F,
     F,S,F,
     3,S,5,
   }, // M
   {
     0,S,4,
     F,6,F,
     F,2,F,
     5,S,2,
   }, // N
   {
     1,4,0,
     F,S,F,
     F,1,7,
     2,3,S,
   }, // O
   {
     4,4,0,
     F,1,7,
     F,3,S,
     3,S,S,
   }, // P
   {
     1,4,0,
     F,S,F,
     F,1,7,
     2,3,7,
   }, // Q
   {
     4,4,0,
     F,1,7,
     F,2,6,
     3,S,5,
   }, // R
   {
     1,4,0,
     2,6,S,
     1,2,6,
     5,5,3,
   }, // S
   {
     1,4,4,
     3,F,S,
     S,F,S,
     S,3,S,
   }, // T
   {
     4,S,1,
     F,S,F,
     F,S,F,
     2,5,3,
   }, // U
   {
     4,S,1,
     F,S,F,
     F,1,7,
     5,3,5,
   }, // V
   {
     4,S,1,
     F,S,F,
     F,7,F,
     3,S,2,
   }, // W
   {
     4,S,1,
     2,1,7,
     1,3,6,
     3,S,5,
   }, // X
   {
     4,S,1,
     2,1,3,
     S,F,S,
     S,3,S,
   }, // Y
   {
     1,4,4,
     S,1,7,
     1,3,S,
     5,5,3,
   }, // Z
   {
     4,4,S,
     F,S,S,
     F,S,S,
     5,5,S,
   }, // [
   {
     S,S,S,
     S,S,S,
     S,S,S,
     S,S,S,
   }, // �
   {
     S,4,4,
     S,S,F,
     S,S,F,
     S,5,5,
   }, // ]
   {
     S,1,S,
     1,3,6,
     3,S,2,
     S,S,S,
   }, // ^
   {
     S,S,S,
     S,S,S,
     S,S,S,
     4,4,4,
   }, // _
   {
     S,2,S,
     S,S,S,
     S,S,S,
     S,S,S,
   }, // `
   {
     S,S,S,
     1,4,0,
     1,4,F,
     2,5,3,
   }, // a
   {
     4,S,S,
     F,S,S,
     F,5,6,
     5,5,3,
   }, // b
   {
     S,S,S,
     1,4,0,
     F,S,1,
     2,5,3,
   }, // c
   {
     S,S,4,
     S,S,F,
     1,5,F,
     2,5,5,
   }, // d
   {
     S,S,S,
     1,4,0,
     F,5,3,
     2,5,3,
   }, // e
   {
     1,4,0,
     F,4,S,
     F,S,S,
     5,S,S,
   }, // f
   {
     S,S,S,
     1,4,0,
     2,5,F,
     2,4,7,
   }, // g
   {
     4,S,S,
     F,S,S,
     F,5,6,
     5,S,5,
   }, // h
   {
     S,4,S,
     S,4,S,
     S,F,S,
     S,5,S,
   }, // i
   {
     S,S,4,
     S,S,4,
     S,S,F,
     2,4,7,
   }, // j
   {
     4,S,S,
     F,1,7,
     F,5,6,
     5,S,5,
   }, // k
   {
     S,4,S,
     S,F,S,
     S,F,S,
     S,2,3,
   }, // l
   {
     S,S,S,
     0,0,0,
     F,5,F,
     5,S,5,
   }, // m
   {
     S,S,S,
     0,1,0,
     F,3,F,
     5,S,5,
   }, // n
   {
     S,S,S,
     1,4,0,
     F,S,F,
     2,5,3,
   }, // o
   {
     S,S,S,
     4,4,0,
     F,4,3,
     5,S,S,
   }, // p
   {
     S,S,S,
     1,4,4,
     F,1,F,
     S,S,F,
   }, // q
   {
     S,S,S,
     4,1,0,
     F,3,2,
     5,S,S,
   }, // r
   {
     S,S,S,
     1,4,0,
     2,5,6,
     2,5,3,
   }, // s
   {
     S,1,S,
     5,F,5,
     S,F,S,
     S,2,3,
   }, // t
   {
     S,S,S,
     4,S,4,
     F,S,F,
     2,5,3,
   }, // u
   {
     S,S,S,
     4,S,1,
     F,1,7,
     2,3,S,
   }, // v
   {
     S,S,S,
     4,S,4,
     F,4,F,
     3,3,3,
   }, // w
   {
     S,S,S,
     0,S,1,
     S,F,S,
     3,S,2,
   }, // x
   {
     S,S,S,
     0,S,1,
     2,F,3,
     1,7,S,
   }, // y
   {
     S,S,S,
     4,4,4,
     1,7,3,
     5,5,5,
   }, // z
   {
     S,1,4,
     4,F,S,
     5,F,S,
     S,2,5,
   }, // {
   {
     S,4,S,
     S,F,S,
     S,F,S,
     S,5,S,
   }, // |
   {
     4,0,S,
     S,F,4,
     S,F,5,
     5,3,S,
   }, // }
   {
     S,1,S,
     1,7,4,
     2,6,5,
     S,2,S,
   }, // <-
   {
     S,0,S,
     4,2,6,
     5,1,7,
     S,3,S,
   }, // ->
 
 };
 
#endif

