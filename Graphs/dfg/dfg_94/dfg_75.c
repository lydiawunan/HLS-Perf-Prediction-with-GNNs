#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 991305059
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned char p)
{
  signed char v_4;
  int v;
  unsigned short result;
  v_4 = (signed char)-32;
  v = (int)p;
  result = (unsigned short)p;
  v = (int)((unsigned char)((double)v + (898983325. - ((double)p + 9.35239518692e+37)))) - (int)p;
  v_4 = (signed char)(- ((unsigned long)(- v_4) - 34992UL) + (unsigned long)p);
  v_4 = v_4;
  result = (unsigned short)(((unsigned long)((v / ((int)v_4 + 112)) % (
                                             (int)(~ result) + 209)) % (
                             ((unsigned long)p | 192631549UL) + 647UL)) % 185968849UL);
  return result;
}


