#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 987346371
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned short fn1(unsigned short p, short p_9, short p_11)
{
  unsigned char v_13;
  signed char v_6;
  unsigned short v_4;
  unsigned int v;
  unsigned short result;
  v_6 = (signed char)122;
  v_13 = (unsigned char)1.50050795798e+38;
  v = (unsigned int)((int)v_13 * (int)p);
  v_4 = (unsigned short)(((((int)v_6 >> ((int)p & 7)) - (int)p_9 / ((int)((short)-3.3949338135e+38) + 970)) | -14467) + 
                         (int)3251079830.85 * (((int)p_11 | -106) + 2498328));
  result = (unsigned short)(- ((long long)v % (- ((long long)v_4 % -191893448LL) + 580LL)));
  return result;
}


