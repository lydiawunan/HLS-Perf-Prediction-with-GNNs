//#include <stdio.h>

/* Generated by Frama-C */
// Generated by ldrgen
// Seed: 403772313
// Command line arguments: -ldrgen -ldrgen-stmt-depth 1 -ldrgen-expr-depth 4 -ldrgen-block-length 5 -ldrgen-max-live 8 -ldrgen-max-args 5
float fn1(char p[3], long p_7, unsigned char p_11)
{
  signed char v_9;
  long v_5;
  double v;
  float result;
  v_9 = (signed char)58;
  v_5 = -8289L;
  v = (double)p_11;
  result = (float)((int)-2873188352.f / (-5 * (int)p[1] + 729));
  v_5 = (long)(~ (((unsigned long long)p[2] + 136370206ULL) * 18446744073709514633ULL) % (
               (unsigned long long)(((float)(47L / (v_5 + 231L)) * (-1.66928581615e+38f - result)) * (float)(
                                    (p_7 + (long)v_9) % (long)((56 - (int)p_11) + 601))) + 21ULL));
  v = (double)((int)((signed char)(- ((v + (double)p[2]) * (double)(v_5 + p_7)))) + -79);
  result = - (13692.f * ((float)((int)((unsigned char)v) % 20) - -773.76348877f));
  return result;
}


