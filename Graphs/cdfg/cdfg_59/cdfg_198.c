#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 906967680
// Command line arguments: -ldrgen -ldrgen-stmt-depth 2 -ldrgen-expr-depth 3 -ldrgen-block-length 3 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(double p)
{
  float v_13;
  unsigned int v_10;
  unsigned long long v_8;
  long v_6;
  long v_4;
  long v;
  float result;
  v_13 = (float)p;
  v_8 = (unsigned long long)p;
  v_6 = 150746278L;
  v_4 = (long)p;
  result = (float)p;
  v = (long)((int)((short)(p - (-351.5105896 - p))) - 23001);
  while (v <= (long)((double)(3631173628UL + (unsigned long)v) - -22.5294089261)) {
    v_6 = v_8 - (unsigned long long)((double)v_6 * ((double)v_4 * 472.003315868));
    v_8 = (unsigned long long)(- (-2445. * p) * (double)((v_13 / 4476.f) / 126530144.f));
    v_10 = (unsigned int)(- result);
    v = (long)((float)v_10 * 6908287488.f);
  }
  while_0_break: ;
  return result;
}


