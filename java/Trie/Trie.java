package trie;

import java.io.*;
import java.util.stream.Stream;

public class Trie {

	static Node root;

	static class Node {
		Node kids[];
		boolean isEnd;

		Node() {
			kids = new Node[26];
			isEnd = false;
		}
	}

	private static void insert(String s) {
		Node temp = root;

		for (int i = 0; i < s.length(); i++) {

			if (temp.kids[s.charAt(i) - 'a'] == null)
				temp.kids[s.charAt(i) - 'a'] = new Node();

			temp = temp.kids[s.charAt(i) - 'a'];
		}
		temp.isEnd = true;
	}

	private static boolean search(String s) {
		Node temp = root;

		for (int i = 0; i < s.length(); i++) {

			if (temp.kids[s.charAt(i) - 'a'] == null)
				return false;

			temp = temp.kids[s.charAt(i) - 'a'];
		}
		return temp.isEnd;
	}

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		String keys[] = br.readLine().replaceAll("\\s+", " ").split(" ");

		String output[] = { "Not present in trie", "Present in trie" };

		root = new Node();

		for (String key : keys)
			insert(key);

		if (search("the") == true)
			System.out.println("the --- " + output[1]);
		else
			System.out.println("the --- " + output[0]);

		if (search("these") == true)
			System.out.println("these --- " + output[1]);
		else
			System.out.println("these --- " + output[0]);

		if (search("their") == true)
			System.out.println("their --- " + output[1]);
		else
			System.out.println("their --- " + output[0]);

		if (search("thaw") == true)
			System.out.println("thaw --- " + output[1]);
		else
			System.out.println("thaw --- " + output[0]);
	}
}
