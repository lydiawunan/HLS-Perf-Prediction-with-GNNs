#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 55289124
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
char fn1(unsigned short p, unsigned char p_5, unsigned int p_9[5][5],
         char p_11, int p_21)
{
  signed char v_19;
  char v_17;
  unsigned long long v_15;
  double v_13;
  double v_7;
  unsigned long v;
  char result;
  v_19 = (signed char)-100;
  v_17 = (char)p;
  v_15 = (unsigned long long)p_9[0][0];
  v_13 = (double)(~ v_15 + (unsigned long long)((unsigned long)((int)(! v_17) % (
                                                                (int)((signed char)-2.8786519908e+38) / (
                                                                (int)v_19 + 143) + 567)) - 
                                                (unsigned long)((int)v_17 + p_21) / 411816203UL));
  v_7 = (double)(p_9[2][4] % (unsigned int)(((int)p_11 + (int)((char)(
                                             v_13 + 708066760.338))) + 785));
  v = (unsigned long)((int)p % (((int)p_5 | (int)((unsigned char)(- v_7))) + 573));
  result = (char)v;
  return result;
}


