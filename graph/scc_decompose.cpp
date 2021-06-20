#include<vector>
#include<algorithm>
#include<functional>
#include<queue>

std::vector<std::vector<int>> scc_decompose(
		std::vector<std::vector<int>> &links,
		std::vector<std::vector<int>> &rlinks
	){
	int n = links.size();
	int cnt = 0;
	std::vector<int> order;
	std::vector<bool> visited(n, false);
	std::function<void(int)> dfs = [&](int x){
		visited[x] = true;
		for(auto to: links[x]) if(!visited[to]) dfs(to);
		order.push_back(x);
	};

	for(int i=0; i<n; i++) if(!visited[i]) dfs(i);
	std::reverse(order.begin(), order.end());

	cnt = 0;
	std::vector<std::vector<int>> scc;
	std::fill(visited.begin(), visited.end(), false);
	dfs = [&](int x){
		visited[x] = true;
		for(auto to: rlinks[x]) if(!visited[to]) dfs(to);
		scc[cnt].push_back(x);
	};

	for(auto i: order) if(!visited[i]){
		scc.push_back(std::vector<int>());
		dfs(i);
		cnt++;
	}

	return scc;
}


std::vector<int> topological_sort(
		std::vector<std::vector<int>> &links,
		std::vector<std::vector<int>> &scc
	){
	int n = links.size();
	std::vector<int> scc_num(n);
	for(int i=0; i<scc.size(); i++){
		for(int &v: scc[i]) scc_num[v] = i;
	}
	
	std::vector<int> in_cnt(scc.size());
	std::vector<std::vector<int>> scc_links(scc.size());
	for(int i=0; i<links.size(); i++){
		for(int j: links[i]){
			if(scc_num[i]!=scc_num[j]){
				scc_links[scc_num[i]].push_back(scc_num[j]);
				in_cnt[scc_num[j]]++;
			}
		}
	}

	std::queue<int> que;
	for(int i=0; i<scc.size(); i++) if(in_cnt[i]==0) que.push(i);
	std::vector<int> ret;
	while(!que.empty()){
		int now = que.front();
		que.pop();
		ret.push_back(now);
		for(auto to: scc_links[now]){
			if(--in_cnt[to]==0) que.push(to);
		}
	}
	return ret;
}



