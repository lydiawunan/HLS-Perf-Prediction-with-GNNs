#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 750678217
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(unsigned char p, float p_7)
{
  char v_4;
  signed char v;
  float result;
  v_4 = (char)(- (126361.203125f * p_7));
  v = (signed char)(756773601UL * (((3868639963UL + (unsigned long)v_4) + (unsigned long)p) % (
                                   (unsigned long)(- p_7) + 52UL)));
  result = (float)((unsigned long long)((int)v * -47836) ^ 0);
  return result;
}


