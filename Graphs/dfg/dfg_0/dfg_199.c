//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 571054943
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
signed char fn1(short p, unsigned long p_9, long long p_11[1][2][4])
{
  unsigned long v_6;
  char v_4;
  double v;
  signed char result;
  v = -927.993696374;
  result = (signed char)p;
  v_4 = (char)105;
  v_6 = (unsigned long)(- ((long long)v / ((-96555023LL ^ p_11[0][0][1]) * (long long)(
                                           (int)result + 97) + 764LL)));
  v = (double)(((v_6 - (unsigned long)p) >> 30U) % (unsigned long)(! (
                                                                   41388 | (int)p) + 394) - 
               p_9 / (unsigned long)((-42 - (int)p) / ((int)result + 445) + 54));
  result = (signed char)((unsigned int)(((int)result - (int)((signed char)v)) * (int)(~ v_4)));
  return result;
}


