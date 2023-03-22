package com.example.rotines;

import java.util.List;

public class Search {
	public static int search(List list, Object element) throws Exception{

		if(list == null || element == null){
			throw new Exception("Valor nulo");
		}

		for (int i = 0; i < list.size(); i++) {
			if(element == list.get(i)){
				return i;
			}
		}
		return -1;
	}
}
