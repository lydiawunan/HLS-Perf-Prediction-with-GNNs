//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 689424147
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(float p)
{
  double v_11;
  unsigned int v_9;
  unsigned short v_7;
  long v_4;
  int v;
  float result;
  v_11 = -9311391870.29;
  v_7 = (unsigned short)13465;
  v_4 = -334396052L;
  v = (int)v_11;
  v_9 = (unsigned int)((313367501L + (long)v) + -43339L);
  v = (int)v_9;
  result = (float)(v << (((int)((unsigned short)((float)(- v_4) - p)) & (int)v_7) & 31));
  return result;
}


