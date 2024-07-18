import java.util.StringTokenizer;

class Solution {
    public String reverseWords(String s) {
        StringTokenizer str = new StringTokenizer(s);
        int nw = str.countTokens();
        String words[] = new String[nw];
        String ns = "";
        for (int i = 0; i < nw; i++) {
           words[i]=str.nextToken();
        }
        for (int i = nw - 1; i >= 0; i--) {
            ns += words[i] + " ";
        }
        ns = ns.trim();
        return ns;
    }
}