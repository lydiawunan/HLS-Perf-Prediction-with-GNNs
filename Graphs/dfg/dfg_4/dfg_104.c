//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 198732893
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
unsigned int fn1(double p, unsigned int p_11)
{
  short v_8;
  unsigned short v_6;
  double v_4;
  char v;
  unsigned int result;
  v_6 = (unsigned short)p;
  v = (char)p_11;
  result = 4294934787U;
  v_8 = (short)(4155014353U * (4294967243U * ((unsigned int)v - (p_11 | (unsigned int)v_6))));
  v_4 = - (((double)result * p + -19802.) * 1.84467440737e+19);
  v = (char)((unsigned int)((int)v / -7259) * ((unsigned int)(((int)((unsigned short)v_4) % (
                                                               (int)v_6 + 143)) * (
                                                              (int)v_8 - (int)((short)p))) / (
                                               ~ result + 357U)));
  result = (unsigned int)v;
  return result;
}


