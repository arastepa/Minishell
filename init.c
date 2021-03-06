#include "minishell.h"

void	initfinal(t_cmdfinal *cmds)
{
	cmds->parsed = NULL;
	cmds->parsedpipe = NULL;
	cmds->next = NULL;
}

void	initredirs(t_redirs *redir)
{
	redir->redir = 0;
	redir->filein = NULL;
	redir->typefilein = 0;
	redir->fileout = NULL;
	redir->typefileout = 0;
	redir->next = NULL;
}

char	**copy_env(char **envp)
{
	int		len;
	char	**cpy;
	int		i;

	len = 0;
	while (envp[len])
		len++;
	if (!(cpy = (char **)ft_calloc(sizeof(char *), (len + 1))))
		return (0);
	i = 0;
	while (i < len)
	{
		cpy[i] = ft_strdup(envp[i]);
		i++;
	}
	cpy[i] = NULL;
	return (cpy);
}

void	initcmds(t_commands *coms)
{
	coms->piped = 0;
	coms->parsed = NULL;
	coms->parsedpipe = NULL;
	coms->next = NULL;
}

void	initheredoc(t_heredoc *here)
{
	here->heredoc = NULL;
	here->next = NULL;
}

void	initenvp(t_all *all, char **envp)
{
	all->envp = copy_env(envp);
}