#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 97710541
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(unsigned short p, float p_5, unsigned short p_9, float p_15,
                short p_17)
{
  double v_23;
  double v_21;
  unsigned long v_19;
  unsigned char v_13;
  long v_11;
  unsigned int v_7;
  unsigned long v;
  signed char result;
  v_23 = -105294099.951;
  v_21 = (double)p;
  v_19 = 3431967002UL;
  v_13 = (unsigned char)254;
  v_11 = -46819L;
  v_7 = (unsigned int)p_5;
  result = (signed char)p_5;
  v = (unsigned long)p_15;
  while (((v + (unsigned long)p) - (unsigned long)((unsigned int)p_5 / (
                                                   v_7 + 433U))) % (unsigned long)(
         ((int)(~ p_9) + -1710) + 645) <= (unsigned long)((float)(121UL - (
                                                                  (unsigned long)v_11 - 556902292UL)) * (
                                                          (float)((unsigned long)v_13 - 327101694UL) / (
                                                          (p_15 - (float)p_17) + 688.f)))) {
    v_19 = (v_19 % 11UL) / (unsigned long)(95L * ((long)v_23 % (v_11 + 67L)) + 583L);
    result = (signed char)((int)(! (- p_9)) | (int)((unsigned short)(
                           ((double)p - v_21) / ((double)(- v_7) + 281.))));
    v = (unsigned long)(- -372);
  }
  while_0_break: ;
  return result;
}


