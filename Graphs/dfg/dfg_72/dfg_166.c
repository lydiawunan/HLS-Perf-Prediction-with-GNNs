#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 882872920
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
double fn1(unsigned long long p, short p_5, long p_7)
{
  unsigned long long v_11;
  int v_9;
  double v;
  double result;
  v_11 = p;
  v_9 = (int)p_5;
  result = (double)(! (- ((unsigned long long)-7638056448.f + ~ p)));
  v = (double)((unsigned long long)(- ((long)((int)p_5 * 1068) / ((p_7 - (long)v_9) + 183L))) / (
               (v_11 * (p + (unsigned long long)p_5) + 427786229ULL) + 641ULL));
  v = (double)(~ ((int)((double)(! p) / (3.144314109e+38 * (double)p + 80.)) >> (
                  (-16891 + (int)((short)(v / (result + 943.)))) & 31)));
  result = -1.11964930275e+36 + - v / ((double)p + 444.);
  return result;
}


